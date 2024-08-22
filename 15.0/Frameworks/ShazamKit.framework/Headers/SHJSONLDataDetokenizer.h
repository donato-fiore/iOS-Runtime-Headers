// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHJSONLDATADETOKENIZER_H
#define SHJSONLDATADETOKENIZER_H

@class NSMutableData, NSString;
@protocol SHDataStream;

#import <Foundation/Foundation.h>


@interface SHJSONLDataDetokenizer : NSObject <SHDataStream>



@property (retain, nonatomic) NSMutableData *currentData; // ivar: _currentData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHDataStream> *next; // ivar: _next
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tap; // ivar: _tap


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeDataToTap:(id)arg0 withError:(*id)arg1 ;
-(id)init;


@end


#endif