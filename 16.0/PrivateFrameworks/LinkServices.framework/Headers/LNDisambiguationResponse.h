// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDISAMBIGUATIONRESPONSE_H
#define LNDISAMBIGUATIONRESPONSE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNDisambiguationResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger selectedItemIndex; // ivar: _selectedItemIndex


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 selectedItemIndex:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif