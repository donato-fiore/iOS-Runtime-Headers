// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSASUBMISSIONPOLICY_H
#define OSASUBMISSIONPOLICY_H

@class NSArray, NSMutableSet, NSString, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSMutableSet *_allowOptOutByRouting;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_results;
}


@property (readonly) BOOL hasTasking; // ivar: _hasTasking
@property BOOL ignoreProxies; // ivar: _ignoreProxies
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions; // ivar: _scanOptions


-(id)_loadPreviousResults;
-(id)buildSubmissionTemplateForConfig:(id)arg0 ;
-(id)init;
-(id)initWithTemplate:(id)arg0 options:(id)arg1 ;
-(id)shouldSubmitRouting:(id)arg0 ;
-(void)persist;
-(void)registerRouting:(id)arg0 result:(BOOL)arg1 ;


@end


#endif