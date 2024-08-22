// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDICTATIONUSEREDIT_H
#define BMDICTATIONUSEREDIT_H

@class BMEventBase, NSArray, NSString;
@protocol BMStoreData;


#import "BMDictationUserEditRequestMetadata.h"

@interface BMDictationUserEdit : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSArray *alternativeSelections; // ivar: _alternativeSelections
@property (readonly, nonatomic) NSString *asrID; // ivar: _asrID
@property (readonly, nonatomic) NSString *correctedText; // ivar: _correctedText
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) BOOL hasEndIndex; // ivar: _hasEndIndex
@property (nonatomic) BOOL hasStartIndex; // ivar: _hasStartIndex
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *interactionID; // ivar: _interactionID
@property (readonly, nonatomic) BMDictationUserEditRequestMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *recognizedText; // ivar: _recognizedText
@property (readonly, nonatomic) NSArray *recognizedTokens; // ivar: _recognizedTokens
@property (readonly, nonatomic) unsigned int startIndex; // ivar: _startIndex
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAsrID:(id)arg0 interactionID:(id)arg1 metadata:(id)arg2 startIndex:(id)arg3 endIndex:(id)arg4 correctedText:(id)arg5 recognizedText:(id)arg6 recognizedTokens:(id)arg7 alternativeSelections:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif