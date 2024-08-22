// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRLINKPREFERENCES_H
#define NRLINKPREFERENCES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NRLinkPreferences : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned char linkType; // ivar: _linkType


+(id)createFromEncodedXPCDict:(id)arg0 ;
-(BOOL)isNotEmpty;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
-(id)copyShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLinkType:(unsigned char)arg0 ;


@end


#endif