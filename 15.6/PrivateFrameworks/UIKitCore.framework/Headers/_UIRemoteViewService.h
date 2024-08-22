// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIREMOTEVIEWSERVICE_H
#define _UIREMOTEVIEWSERVICE_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface _UIRemoteViewService : NSObject

@property (readonly, copy, nonatomic) NSUUID *contextToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *multipleInstanceUUID;
@property (readonly, nonatomic) BOOL multipleInstances;
@property (readonly, nonatomic) BOOL overridesHostAppearance;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *viewControllerClassName;
@property (readonly, nonatomic) NSString *xpcServiceNameRoot;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)_init;
-(id)init;
-(id)initWithExtension:(id)arg0 andContextToken:(id)arg1 ;
-(id)initWithPlugIn:(id)arg0 andContextToken:(id)arg1 ;
-(void)beginUsing:(id)arg0 ;
-(void)endUsing:(id)arg0 ;


@end


#endif