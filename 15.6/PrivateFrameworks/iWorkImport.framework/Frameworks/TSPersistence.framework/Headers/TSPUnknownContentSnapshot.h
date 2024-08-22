// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPUNKNOWNCONTENTSNAPSHOT_H
#define TSPUNKNOWNCONTENTSNAPSHOT_H

@class NSArray, NSString;
@protocol TSPKnownFieldRuleProvider;

#import <Foundation/Foundation.h>


@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider>

 {
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) NSArray *messages; // ivar: _messages
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMessages:(id)arg0 preserveFields:(id)arg1 preserveUntilModifiedFields:(id)arg2 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)arg3 ;
-(id)newFieldTree;
-(id)newUnknownContentSnapshotWithMessages:(id)arg0 ;
-(void)enumerateKnownFieldRulesUsingBlock:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)updateMessageInfo:(*void)arg0 ;


@end


#endif