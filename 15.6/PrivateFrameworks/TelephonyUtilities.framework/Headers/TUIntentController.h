// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUINTENTCONTROLLER_H
#define TUINTENTCONTROLLER_H

@protocol TUHandleContactProvider;

#import <Foundation/Foundation.h>


@interface TUIntentController : NSObject

@property (readonly, nonatomic) NSObject<TUHandleContactProvider> *contactProvider; // ivar: _contactProvider


+(NSInteger)tu_INPersonHandleTypeForTUHandleType:(NSInteger)arg0 ;
+(id)tu_INPersonHandleForTUHandle:(id)arg0 label:(id)arg1 ;
-(id)initWithContactProvider:(id)arg0 ;
-(id)personsByHandleForHandles:(id)arg0 ;
-(id)startCallIntentByHandleForHandles:(id)arg0 capability:(NSInteger)arg1 destinationType:(NSInteger)arg2 ;
-(id)voicemailStartCallIntentByHandleForHandles:(id)arg0 ;


@end


#endif