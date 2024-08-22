// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNWARNINGRECORDER_H
#define VNWARNINGRECORDER_H

@class NSMutableDictionary, NSString;
@protocol VNWarningRecorder;

#import <Foundation/Foundation.h>


@interface VNWarningRecorder : NSObject <VNWarningRecorder>

 {
    NSMutableDictionary *_warnings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasWarnings;
-(id)init;
-(id)valueForWarning:(id)arg0 ;
-(id)warnings;
-(void)recordWarning:(id)arg0 value:(id)arg1 ;
-(void)recordWarnings:(id)arg0 ;
-(void)setWarnings:(id)arg0 ;


@end


#endif