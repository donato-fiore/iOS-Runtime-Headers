// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHINSIGHTSJSONLFILEWRITER_H
#define SHINSIGHTSJSONLFILEWRITER_H

@class NSURL;
@protocol SHInsightsDataStream;

#import <Foundation/Foundation.h>


@interface SHInsightsJSONLFileWriter : NSObject

@property (readonly, nonatomic) NSURL *destination; // ivar: _destination
@property (readonly, nonatomic) NSObject<SHInsightsDataStream> *outputStream; // ivar: _outputStream


+(id)dataForJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)writeObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 compression:(int)arg1 ;
-(id)streamForWritingToURL:(id)arg0 withCompression:(int)arg1 ;
-(void)linkDataStream:(id)arg0 ;


@end


#endif