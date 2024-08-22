// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USKTOKEN_H
#define USKTOKEN_H


#import <Foundation/Foundation.h>


@interface USKToken : NSObject {
    TfToken _token;
}




+(id)dataTypeWithTfToken:(struct TfToken )arg0 ;
+(id)nodeTypeWithTfToken:(struct TfToken )arg0 ;
+(id)roleTypeWithTfToken:(struct TfToken )arg0 ;
+(id)schemaTypeWithTfToken:(struct TfToken )arg0 ;
+(id)tokenWithDataType:(id)arg0 ;
+(id)tokenWithNodeType:(id)arg0 ;
+(id)tokenWithRoleType:(id)arg0 ;
+(id)tokenWithSchemaType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)initWithTfToken:(struct TfToken )arg0 ;
-(id)stringValue;
-(struct TfToken )token;


@end


#endif