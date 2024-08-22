// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACVOICEOVERANNOUNCEMENT_H
#define CACVOICEOVERANNOUNCEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CACVoiceOverAnnouncement : NSObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithMessage:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif