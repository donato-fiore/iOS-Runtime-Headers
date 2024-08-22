// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMXMLREPARSERCONTEXT_H
#define IMXMLREPARSERCONTEXT_H

@class NSString, NSDictionary, NSArray, NSError;

#import <Foundation/Foundation.h>


@interface IMXMLReparserContext : NSObject

@property (readonly, retain) NSString *_inContent; // ivar: _inContent
@property (readonly, retain, nonatomic) NSDictionary *attributesToMerge; // ivar: _attributesToMerge
@property (readonly, retain, nonatomic) NSArray *attributesToPreserve; // ivar: _attributesToPreserve
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *outContent; // ivar: _outContent


-(id)initWithContent:(id)arg0 attributesToPreserve:(id)arg1 attributesToMerge:(id)arg2 ;
-(void)dealloc;


@end


#endif