// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYKEYCHAIN_H
#define OSPREYKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface OspreyKeychain : NSObject



-(BOOL)deleteDataWithIdentifier:(id)arg0 ;
-(BOOL)saveData:(id)arg0 withIdentifier:(id)arg1 ;
-(id)createKeychainQuery;
-(id)fetchDataWithIdentifier:(id)arg0 ;


@end


#endif