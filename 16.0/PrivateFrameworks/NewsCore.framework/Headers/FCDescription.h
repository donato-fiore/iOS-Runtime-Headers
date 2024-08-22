// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCDESCRIPTION_H
#define FCDESCRIPTION_H

@class NSString, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FCDescription : NSObject {
    NSObject *_object;
    Class _class;
    *void _cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    NSUInteger _fieldNameWidth;
    BOOL _commaSeparated;
}




+(id)descriptionWithCFType:(*void)arg0 format:(id)arg1 ;
+(id)descriptionWithObject:(id)arg0 ;
+(id)descriptionWithObject:(id)arg0 class:(Class)arg1 ;
+(id)descriptionWithObject:(id)arg0 class:(Class)arg1 format:(id)arg2 ;
+(id)descriptionWithObject:(id)arg0 format:(id)arg1 ;
-(id)descriptionString;
-(id)initWithCFType:(*void)arg0 header:(id)arg1 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 class:(Class)arg1 format:(id)arg2 ;
-(id)initWithObject:(id)arg0 class:(Class)arg1 format:(id)arg2 arguments:(char *)arg3 ;
-(id)initWithObject:(id)arg0 class:(Class)arg1 header:(id)arg2 ;
-(id)initWithObject:(id)arg0 format:(id)arg1 ;
-(id)p_header;
-(void)addField:(id)arg0 format:(id)arg1 ;
-(void)addField:(id)arg0 object:(id)arg1 ;
-(void)addField:(id)arg0 target:(id)arg1 ;
-(void)addField:(id)arg0 value:(id)arg1 ;
-(void)addFieldValue:(id)arg0 ;
-(void)addFieldWithFormat:(id)arg0 ;
-(void)addSuperDescription;
-(void)setFieldOptionCommaSeparated;


@end


#endif