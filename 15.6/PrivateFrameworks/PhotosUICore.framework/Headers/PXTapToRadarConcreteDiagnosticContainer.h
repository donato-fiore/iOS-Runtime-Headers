// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTAPTORADARCONCRETEDIAGNOSTICCONTAINER_H
#define PXTAPTORADARCONCRETEDIAGNOSTICCONTAINER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol PXTapToRadarDiagnosticContainer;

#import <Foundation/Foundation.h>


@interface PXTapToRadarConcreteDiagnosticContainer : NSObject <PXTapToRadarDiagnosticContainer>



@property (readonly, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSMutableArray *subproviders; // ivar: _subproviders


-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)addAttachment:(id)arg0 ;
-(void)addAttachmentWithData:(id)arg0 name:(id)arg1 ;
-(void)addAttachmentWithDictionary:(id)arg0 name:(id)arg1 ;
-(void)addAttachmentWithObjectiveCCode:(id)arg0 name:(id)arg1 ;
-(void)addAttachmentWithSwiftCode:(id)arg0 name:(id)arg1 ;
-(void)addAttachmentWithText:(id)arg0 name:(id)arg1 ;
-(void)addAttachmentWithText:(id)arg0 name:(id)arg1 extension:(id)arg2 ;
-(void)addSubprovider:(id)arg0 ;
-(void)addSubproviders:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif