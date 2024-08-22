// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUVIEWCONTROLLERCONTEXT_H
#define SUVIEWCONTROLLERCONTEXT_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUViewControllerContext : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_metadata;
}


@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(NSInteger)_typeForTypeString:(id)arg0 ;
-(id)_typeStringForType:(NSInteger)arg0 ;
-(id)copyViewController;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForMetadataKey:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forMetadataKey:(id)arg1 ;


@end


#endif