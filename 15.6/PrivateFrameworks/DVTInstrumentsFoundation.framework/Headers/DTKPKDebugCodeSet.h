// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPKDEBUGCODESET_H
#define DTKPKDEBUGCODESET_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface DTKPKDebugCodeSet : NSObject

@property (readonly, retain, nonatomic) NSMutableSet *kdebugCodes; // ivar: _kdebugCodes


+(void)releaseFilterMask:(char *)arg0 ;
+(void)releaseKperfFilter:(struct kperf_kdebug_filter *)arg0 ;
-(BOOL)containsClass:(unsigned int)arg0 ;
-(BOOL)containsClass:(unsigned int)arg0 subclassID:(unsigned int)arg1 ;
-(char *)createFilterMask:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCodes:(id)arg0 ;
-(id)initWithLegacyCodes:(id)arg0 ;
-(id)legacyXML;
-(struct kperf_kdebug_filter *)createKperfFilter;
-(void)addClass:(unsigned int)arg0 ;
-(void)addClass:(unsigned int)arg0 subclassID:(unsigned int)arg1 ;
-(void)addClass:(unsigned int)arg0 subclassID:(unsigned int)arg1 code:(unsigned int)arg2 ;
-(void)addCodeSet:(id)arg0 ;
-(void)addCodes:(id)arg0 ;
-(void)convertLegacyCodes;


@end


#endif