// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CLIENTIMPORTITEM_H
#define ML3CLIENTIMPORTITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MIPMediaItem.h"
#import "MIPMultiverseIdentifier.h"

@interface ML3ClientImportItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) MIPMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, copy, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier; // ivar: _multiverseIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMultiverseIdentifier:(id)arg0 mediaItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif