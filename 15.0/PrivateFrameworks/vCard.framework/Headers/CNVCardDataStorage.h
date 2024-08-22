// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDDATASTORAGE_H
#define CNVCARDDATASTORAGE_H

@class NSMutableData, NSString;
@protocol CNVCardSerializationStorage;

#import <Foundation/Foundation.h>


@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage>

 {
    NSMutableData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)storageWithData:(id)arg0 ;
-(NSUInteger)currentLength;
-(NSUInteger)estimatedDataLength;
-(id)initWithData:(id)arg0 ;
-(id)insertionMarker;
-(void)appendData:(id)arg0 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)appendString:(id)arg0 usingEncoding:(NSUInteger)arg1 ;
-(void)insertString:(id)arg0 atMarker:(id)arg1 ;


@end


#endif