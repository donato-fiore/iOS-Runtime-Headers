// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCURATEDEVENTKEY_H
#define SGCURATEDEVENTKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>


@interface SGCuratedEventKey : NSObject <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalId; // ivar: _externalId
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCuratedEventKey:(id)arg0 ;
-(id)initWithExternalId:(id)arg0 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;


@end


#endif