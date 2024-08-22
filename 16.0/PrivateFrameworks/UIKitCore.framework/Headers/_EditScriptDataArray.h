// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EDITSCRIPTDATAARRAY_H
#define _EDITSCRIPTDATAARRAY_H

@class NSString, NSArray;
@protocol _EditScriptData;

#import <Foundation/Foundation.h>


@interface _EditScriptDataArray : NSObject <_EditScriptData>



@property (retain, nonatomic) NSString *cachedStringValue; // ivar: _cachedStringValue
@property (retain, nonatomic) NSArray *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)EditScriptDataWithArray:(id)arg0 ;
+(id)EditScriptDataWithString:(id)arg0 chunkSize:(NSInteger)arg1 ;
-(NSInteger)characterIndexForItem:(NSInteger)arg0 ;
-(NSInteger)indexOfFirstDifferenceWithOtherData:(id)arg0 shouldReverseIterate:(BOOL)arg1 ;
-(NSInteger)length;
-(NSInteger)lengthOfItem:(NSInteger)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithString:(id)arg0 chunkSize:(NSInteger)arg1 ;
-(id)stringAtIndex:(NSInteger)arg0 ;
-(id)stringValue;


@end


#endif