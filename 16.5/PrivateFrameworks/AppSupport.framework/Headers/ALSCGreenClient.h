// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALSCGREENCLIENT_H
#define ALSCGREENCLIENT_H


#import <Foundation/Foundation.h>


@interface ALSCGreenClient : NSObject {
    BOOL _cachingAllowed;
}


@property (nonatomic) BOOL key1Value; // ivar: _key1Value
@property (nonatomic) BOOL key2Value; // ivar: _key2Value
@property (nonatomic) BOOL key3Value; // ivar: _key3Value
@property (readonly, nonatomic) BOOL valuesFinalized;


-(BOOL)_attemptReadingValuesFromDiskAndUpdateFileState;
-(BOOL)_readGreenKeysFromDictionary:(id)arg0 ;
-(id)init;


@end


#endif