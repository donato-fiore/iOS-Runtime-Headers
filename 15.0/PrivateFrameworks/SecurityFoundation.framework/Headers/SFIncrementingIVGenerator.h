// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFINCREMENTINGIVGENERATOR_H
#define SFINCREMENTINGIVGENERATOR_H

@class NSString, NSData;
@protocol SFIVGenerator;

#import <Foundation/Foundation.h>


@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator>

 {
    id *_incrementingIVGeneratorInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *messageID;
@property (readonly) Class superclass;


-(id)generateIVWithLength:(NSInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMessageID:(id)arg0 ;
-(id)initWithRandomMessageID;


@end


#endif