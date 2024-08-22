// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMESSAGEKEY_H
#define SGMESSAGEKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>


@interface SGMessageKey : NSObject <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessageKey:(id)arg0 ;
-(id)init;
-(id)initWithSerialized:(id)arg0 ;
-(id)initWithSource:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)serialize;


@end


#endif