// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGACCESSORYDETAILSCONTROLLER_H
#define PSGACCESSORYDETAILSCONTROLLER_H

@class PSListController, EAAccessory, NSString;
@protocol EAAccessoryDelegate;



@interface PSGAccessoryDetailsController : PSListController <EAAccessoryDelegate>

 {
    EAAccessory *_accessory;
    BOOL _shouldEscape;
    BOOL _finishedAppearing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)bonjourName;
-(id)firmwareRevision;
-(id)hardwareRevision;
-(id)init;
-(id)manufacturer;
-(id)modelNumber;
-(id)serialNumber;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_accessoryDidUpdate:(id)arg0 ;
-(void)accessoryDidDisconnect:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)findAppForAccessory;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif