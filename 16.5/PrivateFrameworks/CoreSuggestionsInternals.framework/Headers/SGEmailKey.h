// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEMAILKEY_H
#define SGEMAILKEY_H

@class NSString;
@protocol SGEntityKey;


#import "SGMessageKey.h"

@interface SGEmailKey : SGMessageKey <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *messageId;
@property (readonly) Class superclass;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEmailKey:(id)arg0 ;
-(id)initWithMailMessageKey:(id)arg0 ;
-(id)initWithSource:(id)arg0 messageId:(id)arg1 ;
-(id)toMailMessageKey;


@end


#endif