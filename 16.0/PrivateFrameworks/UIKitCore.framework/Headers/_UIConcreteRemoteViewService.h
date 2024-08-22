// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONCRETEREMOTEVIEWSERVICE_H
#define _UICONCRETEREMOTEVIEWSERVICE_H

@class UIRemoteViewService, NSUUID, NSExtension;
@protocol PKPlugIn;



@interface _UIConcreteRemoteViewService : UIRemoteViewService {
    BOOL _overridesHostAppearance;
    NSUUID *_contextToken;
}


@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSObject<PKPlugIn> *plugin;


-(BOOL)multipleInstances;
-(BOOL)overridesHostAppearance;
-(id)contextToken;
-(id)identifier;
-(id)initWithExtension:(id)arg0 andContextToken:(id)arg1 ;
-(id)multipleInstanceUUID;
-(id)viewControllerClassName;
-(id)xpcServiceNameRoot;
-(int)processIdentifier;
-(void)beginUsing:(id)arg0 ;
-(void)endUsing:(id)arg0 ;
-(void)updateOverridesHostAppearance;


@end


#endif