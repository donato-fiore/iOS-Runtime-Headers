// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRSCHEMAELEMENTSRECURSIVEPARSER_H
#define XRSCHEMAELEMENTSRECURSIVEPARSER_H

@class NSMutableDictionary;
@protocol XRSchemaAnnotationPropertyReportingDelegate;


#import "XRXMLElementParser.h"

@interface XRSchemaElementsRecursiveParser : XRXMLElementParser <XRSchemaAnnotationPropertyReportingDelegate>

 {
    NSMutableDictionary *_errorReplacementsByKey;
}




-(id)errorMessagesReplacements;
-(id)startElementWithName:(id)arg0 attributes:(id)arg1 line:(NSInteger)arg2 col:(NSInteger)arg3 ;
-(void)_handleStart;
-(void)elementWithName:(id)arg0 parser:(id)arg1 key:(id)arg2 finishedWithErrorReplacement:(id)arg3 ;


@end


#endif