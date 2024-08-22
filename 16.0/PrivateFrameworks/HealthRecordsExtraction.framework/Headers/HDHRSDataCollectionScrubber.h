// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRSDATACOLLECTIONSCRUBBER_H
#define HDHRSDATACOLLECTIONSCRUBBER_H

@class HKJSONVisitor, HKPIIRedactor, NSDictionary, NSMutableArray, NSString;
@protocol HKJSONVisitorDelegate;

#import <Foundation/Foundation.h>


@interface HDHRSDataCollectionScrubber : NSObject <HKJSONVisitorDelegate>

 {
    HKJSONVisitor *_visitor;
    HKPIIRedactor *_redactor;
    NSDictionary *_rules;
    NSMutableArray *_objectStack;
    id *_redactedResource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)scrubberForResource:(id)arg0 redactor:(id)arg1 rules:(id)arg2 error:(*id)arg3 ;
-(NSInteger)visitor:(id)arg0 didVisitArray:(id)arg1 ;
-(NSInteger)visitor:(id)arg0 didVisitDictionary:(id)arg1 ;
-(NSInteger)visitor:(id)arg0 visitPrimitive:(id)arg1 ;
-(NSInteger)visitor:(id)arg0 willVisitArray:(id)arg1 ;
-(NSInteger)visitor:(id)arg0 willVisitDictionary:(id)arg1 ;
-(NSUInteger)_redactorOptionsForRule:(id)arg0 ;
-(id)_ruleNodeForKeyPath:(id)arg0 ;
-(id)generateRedactedResource;
-(void)_addObjectToTopObject:(id)arg0 key:(id)arg1 ;


@end


#endif