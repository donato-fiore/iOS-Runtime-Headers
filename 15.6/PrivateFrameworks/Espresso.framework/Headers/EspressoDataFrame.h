// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSODATAFRAME_H
#define ESPRESSODATAFRAME_H

@class NSString, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EspressoDataFrame : NSObject

@property (retain) NSString *function_name; // ivar: _function_name
@property (readonly) NSArray *groundTruthAttachmentNames;
@property (retain) NSMutableDictionary *groundTruthAttachments; // ivar: _groundTruthAttachments
@property (readonly) NSArray *inputAttachmentNames;
@property (retain) NSMutableDictionary *inputAttachments; // ivar: _inputAttachments
@property (readonly) NSArray *outputAttachmentNames;
@property (retain) NSMutableDictionary *outputAttachments; // ivar: _outputAttachments


-(id)getFunctionName;
-(id)getGroundTruthAttachment:(id)arg0 ;
-(id)getInputAttachment:(id)arg0 ;
-(id)getOutputAttachment:(id)arg0 ;
-(id)init;
-(void)loadFromDict:(id)arg0 frameStorage:(id)arg1 ;


@end


#endif