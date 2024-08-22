// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _XRENGINEERINGTYPEDEF_H
#define _XRENGINEERINGTYPEDEF_H

@class NSString;
@protocol XREngineeringTypeDef;


#import "XRXMLElementParser.h"
#import "XREngineeringTypeEncodingConvention.h"

@interface _XREngineeringTypeDef : XRXMLElementParser <XREngineeringTypeDef>

 {
    BOOL _handledEncodingElement;
}


@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (nonatomic) BOOL deprecated; // ivar: _deprecated
@property (retain, nonatomic) XREngineeringTypeEncodingConvention *encodingConvention; // ivar: _encodingConvention
@property (retain, nonatomic) NSString *enumString; // ivar: _enumString
@property (nonatomic) BOOL experimental; // ivar: _experimental
@property (nonatomic) unsigned char impl; // ivar: _impl
@property (retain, nonatomic) NSString *mnemonic; // ivar: _mnemonic
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *usage; // ivar: _usage


+(id)_elementNameToClassMap;
+(id)_elementNameToKVCMap;
-(NSInteger)conventionalBitWidth;
-(id)errorStringHeader;
-(void)_handleCompletion;
-(void)addAttribute:(NSUInteger)arg0 ;
-(void)addString:(id)arg0 elementType:(id)arg1 ;
-(void)didHandleEncodingElement;


@end


#endif