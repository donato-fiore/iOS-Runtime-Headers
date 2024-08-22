// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHJSONLFILEREADER_H
#define SHJSONLFILEREADER_H

@protocol SHJSONLDataDetokenizerDelegate;

#import <Foundation/Foundation.h>


@interface SHJSONLFileReader : NSObject

@property (weak, nonatomic) NSObject<SHJSONLDataDetokenizerDelegate> *delegate; // ivar: _delegate


-(BOOL)loadData:(id)arg0 withCompression:(int)arg1 error:(*id)arg2 ;
-(BOOL)loadDataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadDataFromURL:(id)arg0 withCompression:(int)arg1 error:(*id)arg2 ;
-(id)inputForAlgorithm:(int)arg0 error:(*id)arg1 ;


@end


#endif