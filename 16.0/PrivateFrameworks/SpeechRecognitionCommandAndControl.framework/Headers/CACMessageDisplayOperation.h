// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACMESSAGEDISPLAYOPERATION_H
#define CACMESSAGEDISPLAYOPERATION_H

@class NSOperation, NSString;



@interface CACMessageDisplayOperation : NSOperation

@property BOOL ignore; // ivar: _ignore
@property (retain) NSString *message; // ivar: _message
@property NSInteger type; // ivar: _type


-(id)initWithMessageString:(id)arg0 type:(NSInteger)arg1 ;
-(void)main;


@end


#endif