// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONSAMPLEDATA_H
#define NTKCOMPLICATIONSAMPLEDATA_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKComplicationSampleData : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_familyToTemplate;
    NSMutableDictionary *_familyToTemplatePath;
    NSMutableSet *_supportedFamilies;
}


@property (copy, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (nonatomic) BOOL encodesTemplatesAsPaths; // ivar: _encodesTemplatesAsPaths


+(BOOL)supportsSecureCoding;
-(id)_decodedTemplateFromPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportedFamilies:(id)arg0 ;
-(id)supportedFamilies;
-(id)templateForFamily:(NSInteger)arg0 ;
-(id)templatePathForFamily:(NSInteger)arg0 ;
-(void)_commonInit;
-(void)_decodeAllTemplates;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTemplate:(id)arg0 forFamily:(NSInteger)arg1 ;
-(void)setTemplatePath:(id)arg0 forFamily:(NSInteger)arg1 ;


@end


#endif