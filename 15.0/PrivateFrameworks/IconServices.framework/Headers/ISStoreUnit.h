// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTOREUNIT_H
#define ISSTOREUNIT_H

@class NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface ISStoreUnit : NSObject

@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (readonly) NSData *data; // ivar: _data


+(id)storeUnitWithData:(id)arg0 ;
+(id)storeUnitWithStoreURL:(id)arg0 UUID:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithData:(id)arg0 UUID:(id)arg1 ;
-(void)remapWithStoreURL:(id)arg0 ;


@end


#endif