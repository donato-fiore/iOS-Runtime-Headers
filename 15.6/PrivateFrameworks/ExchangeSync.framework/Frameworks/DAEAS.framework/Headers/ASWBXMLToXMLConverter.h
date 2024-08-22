// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASWBXMLTOXMLCONVERTER_H
#define ASWBXMLTOXMLCONVERTER_H

@class NSMutableArray, NSMutableData;

#import <Foundation/Foundation.h>


@interface ASWBXMLToXMLConverter : NSObject {
    unsigned char _buffer;
}


@property (nonatomic) NSUInteger bytesToConsumeCount; // ivar: _bytesToConsumeCount
@property (nonatomic) char * bytesToConsumeEnd; // ivar: _bytesToConsumeEnd
@property (nonatomic) char * bytesToConsumeVector; // ivar: _bytesToConsumeVector
@property (retain, nonatomic) NSMutableArray *codePageStack; // ivar: _codePageStack
@property (nonatomic) BOOL compact; // ivar: _compact
@property (nonatomic) int currentCodePage; // ivar: _currentCodePage
@property (nonatomic) BOOL done; // ivar: _done
@property (retain, nonatomic) NSMutableArray *endTagStack; // ivar: _endTagStack
@property (nonatomic) NSInteger maxInlineStringLength; // ivar: _maxInlineStringLength
@property (nonatomic) BOOL oldFormat; // ivar: _oldFormat
@property (nonatomic) unsigned int opaqueDataLength; // ivar: _opaqueDataLength
@property (nonatomic) NSUInteger overflowLength; // ivar: _overflowLength
@property (nonatomic) int ppstate; // ivar: _ppstate
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSMutableData *stringAccumulator; // ivar: _stringAccumulator
@property (nonatomic) BOOL useMetadata; // ivar: _useMetadata
@property (nonatomic) int wbxmlState; // ivar: _wbxmlState


-(NSInteger)readFromInput;
-(NSInteger)writableBufferSize;
-(char *)writableBufferPtr;
-(id)initUsingMetadata:(BOOL)arg0 ;
-(void)_consumeBytes;
-(void)_resetWBXMLParser;
-(void)handleBytesAvailable;
-(void)outputData:(id)arg0 ;
-(void)outputString:(id)arg0 ;


@end


#endif