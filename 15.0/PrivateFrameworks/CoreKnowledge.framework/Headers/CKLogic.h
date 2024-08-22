// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLOGIC_H
#define CKLOGIC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKLogic : NSObject {
    ? body;
    ? negatedBody;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *identifier;


+(id)ifExistsLink:(id)arg0 to:(id)arg1 ;
+(id)ifNotExistsLink:(id)arg0 to:(id)arg1 ;
-(id)and:(id)arg0 ;
-(id)andExistsLink:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)andNotExistsLink:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif