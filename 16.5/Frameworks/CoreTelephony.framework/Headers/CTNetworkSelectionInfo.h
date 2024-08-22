// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTNETWORKSELECTIONINFO_H
#define CTNETWORKSELECTIONINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTNetwork.h"

@interface CTNetworkSelectionInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) CTNetwork *selection; // ivar: _selection
@property (nonatomic) NSUInteger selectionMode; // ivar: _selectionMode
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif