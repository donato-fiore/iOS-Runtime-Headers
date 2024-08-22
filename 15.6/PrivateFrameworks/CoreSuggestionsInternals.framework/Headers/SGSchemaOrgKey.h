// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSCHEMAORGKEY_H
#define SGSCHEMAORGKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>


@interface SGSchemaOrgKey : NSObject <SGEntityKey>

 {
    NSString *_uuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSchemaOrgKey:(id)arg0 ;
-(id)init;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;


@end


#endif