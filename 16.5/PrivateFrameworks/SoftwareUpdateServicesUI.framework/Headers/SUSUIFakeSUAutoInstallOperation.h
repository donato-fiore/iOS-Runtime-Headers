// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUIFAKESUAUTOINSTALLOPERATION_H
#define SUSUIFAKESUAUTOINSTALLOPERATION_H

@class SUAutoInstallOperation, NSUUID;



@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}




-(BOOL)isCanceled;
-(BOOL)isExpired;
-(id)forecast;
-(id)id;
-(void)cancel;


@end


#endif