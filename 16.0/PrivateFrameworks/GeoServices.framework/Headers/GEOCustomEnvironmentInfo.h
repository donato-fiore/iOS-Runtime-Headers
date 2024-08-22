// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCUSTOMENVIRONMENTINFO_H
#define GEOCUSTOMENVIRONMENTINFO_H

@class NSMapTable, NSString;


#import "GEOEnvironmentInfo.h"

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}




-(BOOL)isActive;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg0 displayName:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)overrideURLs;
-(void)delete;
-(void)makeActive;
-(void)save;
-(void)updateWithURLs:(id)arg0 ;


@end


#endif