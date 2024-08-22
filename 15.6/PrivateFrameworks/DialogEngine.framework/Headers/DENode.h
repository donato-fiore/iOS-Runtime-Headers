// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DENODE_H
#define DENODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DENode : NSObject

@property shared_ptr<siri::dialogengine::Node> This; // ivar: _This
@property (retain) NSString *conditionName;


-(?)getSharedPtr;
-(?)initWithSharedPtr;
-(BOOL)isOfType:(NSUInteger)arg0 ;
-(id)getDialog;
-(id)getGlobalId:(id)arg0 ;
-(id)init;


@end


#endif