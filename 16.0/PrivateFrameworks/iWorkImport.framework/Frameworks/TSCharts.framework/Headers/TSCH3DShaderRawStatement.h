// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERRAWSTATEMENT_H
#define TSCH3DSHADERRAWSTATEMENT_H

@class NSString;
@protocol TSCH3DShaderStatement;

#import <Foundation/Foundation.h>


@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSCH3DShaderType linkageType; // ivar: _linkageType
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;


+(id)statementWithString:(id)arg0 linkageType:(struct TSCH3DShaderType )arg1 ;
-(BOOL)isLinked;
-(id)initWithString:(id)arg0 linkageType:(struct TSCH3DShaderType )arg1 ;
-(id)resolve;
-(void)setGeneratedForType:(struct TSCH3DShaderType )arg0 ;


@end


#endif