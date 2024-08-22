// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8REMOTEUI22RUISWIFTUITABLEVIEWROW_H
#define _TTC8REMOTEUI22RUISWIFTUITABLEVIEWROW_H



#import "RUITableViewRow.h"
#import "RUIXMLElement.h"

@interface _TtC8RemoteUI22RUISwiftUITableViewRow : RUITableViewRow {
    ? cell;
    ? loadedXML;
    ? remoteState;
    ? $__lazy_storage_$_remoteLoader;
    ? subscription;
}


@property (nonatomic) BOOL selected;
@property (nonatomic, retain) RUIXMLElement *xmlElement; // ivar: xmlElement


-(BOOL)isSelected;
-(id)init;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)tableCell;
-(void)didBecomeSelected;
-(void)populatePostbackDictionary:(id)arg0 ;


@end


#endif