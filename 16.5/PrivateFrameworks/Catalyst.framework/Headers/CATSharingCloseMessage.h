// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATSHARINGCLOSEMESSAGE_H
#define CATSHARINGCLOSEMESSAGE_H

@class NSError, NSString, NSDictionary;
@protocol CATSharingContentMessage;

#import <Foundation/Foundation.h>


@interface CATSharingCloseMessage : NSObject <CATSharingContentMessage>



@property (readonly, nonatomic) NSError *closeError; // ivar: _closeError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger messageType;
@property (readonly) Class superclass;


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithError:(id)arg0 ;


@end


#endif