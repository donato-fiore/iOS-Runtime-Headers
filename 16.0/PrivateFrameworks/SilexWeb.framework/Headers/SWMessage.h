// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWMESSAGE_H
#define SWMESSAGE_H

@class NSDictionary, NSString;
@protocol SWMessage;

#import <Foundation/Foundation.h>


@interface SWMessage : NSObject <SWMessage>



@property (readonly, nonatomic) NSDictionary *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif