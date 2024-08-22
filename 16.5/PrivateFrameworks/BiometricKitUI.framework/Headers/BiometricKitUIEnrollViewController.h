// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITUIENROLLVIEWCONTROLLER_H
#define BIOMETRICKITUIENROLLVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, BiometricKit, NSString;
@protocol BiometricKitDelegate, BiometricKitUIEnrollResultDelegate;



@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate>

 {
    NSMutableDictionary *_properties;
}


@property (retain, nonatomic) BiometricKit *biometricKit; // ivar: _biometricKit
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BiometricKitUIEnrollResultDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)propertyForKey:(id)arg0 ;
-(void)cancelEnroll;
-(void)restartEnroll;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)startEnroll;
-(void)startEnrollOperation;


@end


#endif