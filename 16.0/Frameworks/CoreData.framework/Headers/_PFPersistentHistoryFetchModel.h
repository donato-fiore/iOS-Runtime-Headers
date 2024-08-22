// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFPERSISTENTHISTORYFETCHMODEL_H
#define _PFPERSISTENTHISTORYFETCHMODEL_H

@class NSString;
@protocol _PFAncillaryModelFactory;

#import <Foundation/Foundation.h>


@interface _PFPersistentHistoryFetchModel : NSObject <_PFAncillaryModelFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)ancillaryEntityCount;
+(NSUInteger)ancillaryEntityOffset;
+(id)ancillaryModelNamespace;
+(void)_invalidateStaticCaches;
+(void)initialize;


@end


#endif