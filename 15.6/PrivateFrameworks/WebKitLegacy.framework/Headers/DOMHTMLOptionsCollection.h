// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLOPTIONSCOLLECTION_H
#define DOMHTMLOPTIONSCOLLECTION_H



#import "DOMObject.h"

@interface DOMHTMLOptionsCollection : DOMObject

@property unsigned int length;
@property int selectedIndex;


-(id)item:(unsigned int)arg0 ;
-(id)namedItem:(id)arg0 ;
-(void)add:(id)arg0 index:(unsigned int)arg1 ;
-(void)dealloc;
-(void)remove:(unsigned int)arg0 ;


@end


#endif