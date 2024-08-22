// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LAKEYSTOREGENERICPASSWORDNULL_H
#define _LAKEYSTOREGENERICPASSWORDNULL_H

@class NSString;
@protocol LAKeyStoreGenericPassword;

#import <Foundation/Foundation.h>


@interface _LAKeyStoreGenericPasswordNull : NSObject <LAKeyStoreGenericPassword>

 {
    NSString *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(id)init;
-(void)fetchDataWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif