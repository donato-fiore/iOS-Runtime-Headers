// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMESSAGECONTEXT_H
#define TCMESSAGECONTEXT_H

@class NSMutableSet, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TCMessageContext : NSObject {
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_affectedObjectStack;
    NSMutableDictionary *m_placeholderToObjectMap;
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
}




+(BOOL)isFileStructuredStorage;
+(NSUInteger)getErrorCount;
+(NSUInteger)saveAffectedObjectStack;
+(id)currentObjectOrPlaceholder;
+(id)getErrorArray;
+(id)getWarningArray;
+(void)createContextForCurrentThread;
+(void)initialize;
+(void)popAffectedObject;
+(void)popAffectedObjectPlaceholder:(id)arg0 ;
+(void)pushAffectedObject:(id)arg0 ;
+(void)pushAffectedObjectPlaceholder;
+(void)removeContextForCurrentThread;
+(void)reportError:(id)arg0 ;
+(void)reportErrorException:(id)arg0 ;
+(void)reportObject:(id)arg0 withWarning:(id)arg1 ;
+(void)reportObjectOrPlaceholder:(id)arg0 withWarning:(id)arg1 parameters:(char *)arg2 ;
+(void)reportWarning:(id)arg0 ;
+(void)reportWarningException:(id)arg0 ;
+(void)reportWarningsToDelegate;
+(void)restoreAffectedObjectStack:(NSUInteger)arg0 ;
+(void)setIsFileStructuredStorage:(BOOL)arg0 ;
-(NSUInteger)saveAffectedObjectStack;
-(id)currentObjectOrPlaceholder;
-(id)init;
-(void)addErrorMessageEntry:(id)arg0 ;
-(void)addWarningMessageEntry:(id)arg0 ;
-(void)dealloc;
-(void)popAffectedObject;
-(void)popAffectedObjectPlaceholder:(id)arg0 ;
-(void)pushAffectedObject:(id)arg0 ;
-(void)pushAffectedObjectPlaceholder;
-(void)replacePlaceholdersWithObjects;
-(void)reportWarningForObject:(id)arg0 warning:(id)arg1 parameterList:(char *)arg2 ;
-(void)reportWarningsToDelegate;
-(void)resolveObjectOfCurrentAffectedObjectPlaceholder;
-(void)restoreAffectedObjectStack:(NSUInteger)arg0 ;
-(void)setAffectedObject:(id)arg0 forPlaceholderWithKey:(id)arg1 ;


@end


#endif