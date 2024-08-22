// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSHARINGSENTMESSAGE_H
#define CATSHARINGSENTMESSAGE_H

@class NSData, NSString, NSDictionary;
@protocol CATSharingContentMessage;

#import <Foundation/Foundation.h>


@interface CATSharingSentMessage : NSObject <CATSharingContentMessage>



@property (readonly, copy, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger messageType;
@property (readonly) Class superclass;


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithContent:(id)arg0 ;


@end


#endif