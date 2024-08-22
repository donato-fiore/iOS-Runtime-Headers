// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFBIOMEMANAGER_H
#define LBFBIOMEMANAGER_H

@class BMSource, BMStream;

#import <Foundation/Foundation.h>


@interface LBFBiomeManager : NSObject

@property (retain, nonatomic) BMSource *biomeSource; // ivar: _biomeSource
@property (readonly, nonatomic) BMStream *biomeStream; // ivar: _biomeStream


-(BOOL)enumerateData:(id)arg0 endDate:(id)arg1 reversed:(BOOL)arg2 shouldContinue:(id)arg3 ;
-(BOOL)writeData:(id)arg0 ;
-(id)init:(id)arg0 ;
-(id)readData:(id)arg0 endDate:(id)arg1 ;


@end


#endif