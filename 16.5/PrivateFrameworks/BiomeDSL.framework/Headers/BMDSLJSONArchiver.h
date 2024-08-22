// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLJSONARCHIVER_H
#define BMDSLJSONARCHIVER_H

@class NSCoder;



@interface BMDSLJSONArchiver : NSCoder



+(id)archiveCompatibleObjectWithObject:(id)arg0 options:(NSUInteger)arg1 userInfo:(id)arg2 ;
+(id)archivedDataWithDSL:(id)arg0 ;
+(id)archivedDataWithObject:(id)arg0 ;
+(id)archivedStringWithDSL:(id)arg0 ;
+(id)archivedStringWithObject:(id)arg0 ;
+(void)registerJSONTransformers;


@end


#endif